@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isNewerThan:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)hasExpired;

@end
