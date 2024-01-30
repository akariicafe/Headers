@class NSString, NSNumber, NSDate;

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *dueAfter;
@property (readonly, nonatomic) NSDate *dueBefore;
@property (readonly, nonatomic) NSNumber *completed;
@property (readonly, nonatomic) NSNumber *hasLocation;
@property (readonly, nonatomic) NSString *location;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 dueAfter:(id)a1 dueBefore:(id)a2 isCompleted:(id)a3 hasLocation:(id)a4 location:(id)a5;
- (void)encodeWithCoder:(id)a0;

@end
