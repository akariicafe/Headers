@class NSString, NSDate, NSNumber, NSObject;
@protocol NSSecureCoding;

@interface NSCKMetadataEntry : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *boolValueNum;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSObject<NSSecureCoding> *transformedValue;
@property (retain, nonatomic) NSNumber *integerValue;
@property (retain, nonatomic) NSDate *dateValue;

@end
