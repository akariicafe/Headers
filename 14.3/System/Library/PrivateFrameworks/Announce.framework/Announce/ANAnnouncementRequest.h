@class ANAnnouncementContent, ANAnnouncementDestination;

@interface ANAnnouncementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ANAnnouncementContent *content;
@property (readonly, nonatomic) ANAnnouncementDestination *destination;

+ (id)requestWithContent:(id)a0 destination:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContent:(id)a0 destination:(id)a1;

@end
