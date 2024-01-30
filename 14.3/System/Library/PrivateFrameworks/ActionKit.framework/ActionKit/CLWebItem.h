@class NSString, NSURL, UIImage, NSDate;

@interface CLWebItem : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long viewCount;
@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSURL *href;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) UIImage *icon;
@property (nonatomic, getter=isTrashed) BOOL trashed;
@property (nonatomic, getter=isPrivate) BOOL private;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *deletedAt;

+ (id)webItem;
+ (id)webItemWithName:(id)a0;
+ (id)webItemWithName:(id)a0 type:(long long)a1 viewCount:(long long)a2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 type:(long long)a1 viewCount:(long long)a2;

@end
