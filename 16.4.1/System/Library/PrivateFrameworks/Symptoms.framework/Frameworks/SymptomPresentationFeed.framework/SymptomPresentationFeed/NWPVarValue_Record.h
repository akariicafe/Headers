@class NSNumber, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface NWPVarValue_Record : NSObject

@property (retain, nonatomic) NSObject<NSSecureCoding, NSCopying> *value;
@property (nonatomic) long long info;
@property (retain, nonatomic) NSNumber *effective_epsilon;

- (void).cxx_destruct;

@end
