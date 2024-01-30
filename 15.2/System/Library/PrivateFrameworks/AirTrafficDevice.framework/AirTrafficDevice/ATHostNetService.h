@class NSString, NSNetService;

@interface ATHostNetService : NSObject

@property (readonly, nonatomic) NSNetService *netService;
@property (readonly, nonatomic) NSString *libraryIdentifier;

- (void).cxx_destruct;
- (id)initWithNetService:(id)a0;

@end
