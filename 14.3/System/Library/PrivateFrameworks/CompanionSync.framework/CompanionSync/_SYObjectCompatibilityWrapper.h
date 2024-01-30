@class NSString;
@protocol SYObject;

@interface _SYObjectCompatibilityWrapper : NSProxy <SYChange, SYObject> {
    id<SYObject> _syObject;
    long long _type;
}

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
