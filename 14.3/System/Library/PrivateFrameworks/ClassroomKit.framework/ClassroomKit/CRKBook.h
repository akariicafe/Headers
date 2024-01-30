@class NSString, NSData, NSURL;

@interface CRKBook : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSData *image;
@property (copy, nonatomic) NSURL *webURL;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasChapters;

- (id)init;
- (void).cxx_destruct;
- (id)imageDescription;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
