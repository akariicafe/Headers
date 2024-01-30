@class NSDate;

@interface EKSerializableAlarm : EKSerializableObject

@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (nonatomic) BOOL isAbsolute;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)initWithAlarm:(id)a0;
- (id)createAlarm:(id *)a0;

@end
