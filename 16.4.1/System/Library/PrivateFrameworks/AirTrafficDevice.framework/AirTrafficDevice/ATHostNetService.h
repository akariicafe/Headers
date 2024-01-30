@class NSString, NSNetService;

@interface ATHostNetService : NSObject

@property (readonly, nonatomic) NSNetService *netService;
@property (readonly, nonatomic) NSString *libraryIdentifier;

- (id)initWithNetService:(id)a0;
- (void).cxx_destruct;

@end
