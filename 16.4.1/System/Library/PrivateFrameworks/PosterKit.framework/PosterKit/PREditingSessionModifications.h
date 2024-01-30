@class NSDate;

@interface PREditingSessionModifications : NSObject <NSCopying>

@property (nonatomic) BOOL containedWidgetsBeforeEdit;
@property (nonatomic) BOOL colorModified;
@property (nonatomic) BOOL fontModified;
@property (nonatomic) BOOL numberingSystemModified;
@property (nonatomic) BOOL posterContentModified;
@property (nonatomic) BOOL widgetsModified;
@property (retain, nonatomic) NSDate *startDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
