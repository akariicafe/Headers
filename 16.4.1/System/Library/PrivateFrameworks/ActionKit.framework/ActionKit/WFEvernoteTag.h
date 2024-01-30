@class NSString, NSNumber;

@interface WFEvernoteTag : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *parentGuid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTag:(id)a0;
- (id)initWithGUID:(id)a0 name:(id)a1 parentGuid:(id)a2 updateSequenceNum:(id)a3;

@end
