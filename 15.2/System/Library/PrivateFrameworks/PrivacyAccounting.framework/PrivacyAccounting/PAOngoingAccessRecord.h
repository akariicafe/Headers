@class PAAccess, NSString;

@interface PAOngoingAccessRecord : NSObject <PAAccessRecord>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) PAAccess *access;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccess:(id)a0 startTime:(double)a1;

@end
