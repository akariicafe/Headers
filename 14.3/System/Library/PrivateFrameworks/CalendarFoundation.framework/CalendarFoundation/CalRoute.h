@class NSString, CalLocation;

@interface CalRoute : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) CalLocation *start;
@property (retain) CalLocation *end;
@property double duration;
@property (copy) NSString *route;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
