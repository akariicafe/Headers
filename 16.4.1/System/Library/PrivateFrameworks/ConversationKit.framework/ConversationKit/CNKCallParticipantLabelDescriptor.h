@class NSArray, NSString;

@interface CNKCallParticipantLabelDescriptor : NSObject {
    void /* unknown type, empty encoding */ strings;
    void /* unknown type, empty encoding */ secondaryString;
    void /* unknown type, empty encoding */ localizedSenderIdentity;
}

@property (class, nonatomic, copy) id /* block */ organizationNameProvider;

@property (nonatomic, copy) NSArray *strings;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic) void /* unknown type, empty encoding */ layoutState;
@property (nonatomic) void /* unknown type, empty encoding */ isDynamic;
@property (nonatomic, copy) NSString *localizedSenderIdentity;

+ (id)labelDescriptorWithStringsForCall:(id)a0 callCount:(long long)a1 alertAvailable:(BOOL)a2 allowsDuration:(BOOL)a3;
+ (id)labelDescriptorWithStringsForCall:(id)a0 callCount:(long long)a1 callCenter:(id)a2 alertAvailable:(BOOL)a3 allowsDuration:(BOOL)a4;

- (id)initWithString:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
