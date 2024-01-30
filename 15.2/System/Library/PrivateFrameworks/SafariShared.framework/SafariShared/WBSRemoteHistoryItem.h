@class NSURL, NSString, NSDate;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *lastVisitTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 lastVisitTime:(id)a2;

@end
