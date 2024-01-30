@class NSArray, NSDictionary, NSURL, NSNumber;

@interface SSDictionaryResponse : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSNumber *failureType;
@property (readonly, nonatomic) NSArray *pingURLs;
@property (readonly, nonatomic, getter=isSupportedProtocolVersion) BOOL supportedProtocolVersion;
@property (readonly, nonatomic) NSURL *versionMismatchURL;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_copyAccount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionsWithActionType:(id)a0;
- (id)_valueForProtocolKey:(id)a0;

@end
