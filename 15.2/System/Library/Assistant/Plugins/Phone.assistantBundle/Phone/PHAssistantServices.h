@class CNContactStore;

@interface PHAssistantServices : NSObject

@property (class, readonly, nonatomic) CNContactStore *sharedContactStore;

@end
