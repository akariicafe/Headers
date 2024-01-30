@class NSString, NSData, NSDate;

@interface _CDContextualKeyPathMO : NSManagedObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *deviceIDString;
@property (nonatomic) BOOL isUserCentric;
@property (nonatomic) BOOL isEphemeral;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSData *value;
@property (retain, nonatomic) NSDate *creationDate;

+ (void)hydrateMO:(id)a0 fromKeyPath:(id)a1 andValue:(id)a2;
+ (id)materializedContextValueFrom:(id)a0;
+ (id)materializedKeyPathFrom:(id)a0;

@end
