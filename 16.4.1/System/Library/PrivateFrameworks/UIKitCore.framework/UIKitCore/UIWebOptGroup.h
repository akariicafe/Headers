@class NSArray;
@protocol UIWebSelectedItemPrivate;

@interface UIWebOptGroup : NSObject

@property (readonly, nonatomic) long long offset;
@property (retain, nonatomic) id<UIWebSelectedItemPrivate> group;
@property (retain, nonatomic) NSArray *options;

- (void)dealloc;
- (id)initWithGroup:(id)a0 itemOffset:(long long)a1;

@end
