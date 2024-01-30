@class NSString, NSDate;
@protocol CRKClassKitPerson, CRKASMNameComponents;

@interface CRKASMConcreteUser : NSObject <CRKASMUser>

@property (readonly, nonatomic) id<CRKClassKitPerson> backingPerson;
@property (readonly, nonatomic) NSDate *backingPersonInitialModificationDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) id<CRKASMNameComponents> nameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackingPerson:(id)a0;
- (BOOL)isEqualToConcreteUser:(id)a0;

@end
