@class NSData, NSString;

@interface _DPPrioRecordMO : NSManagedObject

@property (retain, nonatomic) NSData *share1;
@property (retain, nonatomic) NSData *share2;
@property (nonatomic) long long dimension;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;

+ (id)fetchRequest;

@end
