@class NSString;

@interface RVQuery : NSObject <NSSecureCoding, RVQueryProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id /* block */ queryProvider;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) long long queryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
