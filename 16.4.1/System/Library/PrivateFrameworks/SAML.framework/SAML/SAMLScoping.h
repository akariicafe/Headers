@class NSNumber, NSArray, NSString;

@interface SAMLScoping : SAMLBaseElement

@property (readonly, nonatomic) NSNumber *proxyCount;
@property (readonly, nonatomic) NSArray *idpList;
@property (readonly, nonatomic) NSArray *requesterIds;
@property (readonly, nonatomic) NSString *getComplete;

+ (id)createElement:(id *)a0;

- (void)addRequesterId:(id)a0;

@end
