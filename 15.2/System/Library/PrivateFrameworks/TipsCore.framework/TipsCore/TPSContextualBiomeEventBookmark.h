@protocol BMBookmark;

@interface TPSContextualBiomeEventBookmark : TPSContextualEventBookmark

@property (retain, nonatomic) id<BMBookmark> sinkBookmark;

+ (BOOL)supportsSecureCoding;
+ (id)bookmarkWithSinkBookmark:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
