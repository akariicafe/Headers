@class NSData, NSNumber, NSArray;

@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSNumber *attemptCount;
@property (retain, nonatomic) NSArray *pnrReqList;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToCTPNRRequestType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
