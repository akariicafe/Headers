@class NSString;

@interface CNContactSection : NSObject <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *sortKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
