@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isNewerThan:(id)a0;
- (BOOL)hasExpired;
- (void)encodeWithCoder:(id)a0;

@end
