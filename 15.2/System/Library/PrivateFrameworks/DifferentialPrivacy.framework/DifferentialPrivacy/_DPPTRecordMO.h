@class NSString;

@interface _DPPTRecordMO : NSManagedObject

@property (retain, nonatomic) NSString *privateValue;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;

+ (id)fetchRequest;

@end
