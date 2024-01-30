@interface CLIntersiloInterface : NSObject

+ (id)sharedInterface;

- (void)extendSelectorInfoWithProtocol:(id)a0 bases:(id)a1;
- (id)getInfoForSelector:(SEL)a0;

@end
