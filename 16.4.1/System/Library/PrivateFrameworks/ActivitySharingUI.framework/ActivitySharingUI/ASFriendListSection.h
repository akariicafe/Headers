@class NSArray, NSDate;

@interface ASFriendListSection : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSArray *rows;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (BOOL)containsFriendListRow:(id)a0;
- (id)initWithDate:(id)a0 andRows:(id)a1;

@end
