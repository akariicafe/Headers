@class NSString, NSArray, NSData, NSNumber;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying>

@property (copy, nonatomic) NSString *playerGUID;
@property (copy, nonatomic) NSData *SICData;
@property (copy, nonatomic) NSArray *sinfs;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *contentIdentifier;
@property (copy, nonatomic) NSString *playbackType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
