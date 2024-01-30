@class NSString;
@protocol SYObject;

@interface NPHSYObjectWrapper : NSObject <SYChange> {
    long long _type;
}

@property (readonly, nonatomic) id<SYObject> wrappedObject;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSYObject:(id)a0 type:(long long)a1;

@end
