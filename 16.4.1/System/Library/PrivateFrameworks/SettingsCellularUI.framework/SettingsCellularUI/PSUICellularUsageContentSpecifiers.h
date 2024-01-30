@class NSArray, NSMutableArray;

@interface PSUICellularUsageContentSpecifiers : NSObject

@property (retain, nonatomic) NSArray *leadingContentSpecifiers;
@property (retain, nonatomic) NSMutableArray *appSpecifiers;
@property (retain, nonatomic) NSArray *trailingContentSpecifiers;

- (id)specifiers;
- (void).cxx_destruct;

@end
