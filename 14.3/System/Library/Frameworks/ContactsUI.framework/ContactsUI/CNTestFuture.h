@class NSError;
@protocol NSSecureCoding, NSObject;

@interface CNTestFuture : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<NSObject, NSSecureCoding> result;
@property (readonly, nonatomic) NSError *error;

+ (id)futureWithResult:(id)a0;
+ (id)futureWithError:(id)a0;

- (id)initWithError:(id)a0;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
