@class NSString, NSArray, NSDate;

@interface WLKUpNextItemCollection : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)description;

@end
