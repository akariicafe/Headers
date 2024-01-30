@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject

@property (nonatomic) long long tag;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *headerTitle;

- (BOOL)hasSubitemForIndexPathRow:(unsigned long long)a0;
- (unsigned long long)numberOfRows;
- (void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (id)initWithTag:(long long)a0 headerTitle:(id)a1;
- (id)itemAtIndex:(unsigned long long)a0 subitemIndex:(unsigned long long *)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;

@end
