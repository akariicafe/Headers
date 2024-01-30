@class NSString, PCSMTT, NSDate;

@interface PCSMTTPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) PCSMTT *mtt;
@property (retain) NSDate *start;
@property (retain) NSString *name;
@property (readonly) double time;
@property (readonly) BOOL success;

- (void)complete:(BOOL)a0 time:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)complete:(BOOL)a0;
- (id)initWithMTT:(id)a0 name:(id)a1;
- (id)jsonDict;

@end
