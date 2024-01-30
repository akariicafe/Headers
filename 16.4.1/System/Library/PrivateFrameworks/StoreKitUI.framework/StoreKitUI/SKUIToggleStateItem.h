@class NSString;

@interface SKUIToggleStateItem : NSObject <NSCopying>

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) char toggled;
@property (copy, nonatomic) NSString *nonToggleString;
@property (copy, nonatomic) NSString *toggledString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
