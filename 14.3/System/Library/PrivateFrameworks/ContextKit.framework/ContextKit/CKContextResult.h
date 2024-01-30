@class NSString, NSOrderedSet, NSURL, NSSet;

@interface CKContextResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) long long minPrefix;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *topicId;
@property (copy, nonatomic) NSString *portraitId;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *debug;
@property (copy, nonatomic) NSOrderedSet *relatedItems;
@property (copy, nonatomic) NSSet *tags;
@property (nonatomic, getter=isExactMatch) BOOL exactMatch;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 query:(id)a1 url:(id)a2 category:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
