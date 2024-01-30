@class NSArray, NSMutableArray;

@interface PSUICellularUsageContentSpecifiers : NSObject

@property (retain, nonatomic) NSArray *leadingContentSpecifiers;
@property (retain, nonatomic) NSMutableArray *appSpecifiers;
@property (retain, nonatomic) NSArray *trailingContentSpecifiers;

- (void).cxx_destruct;
- (id)specifiers;

@end
