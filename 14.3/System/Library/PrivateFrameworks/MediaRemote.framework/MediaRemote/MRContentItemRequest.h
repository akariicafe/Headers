@class MRContentItem, MRPlaybackQueueRequest;

@interface MRContentItemRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MRContentItem *item;
@property (retain, nonatomic) MRPlaybackQueueRequest *request;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 request:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
