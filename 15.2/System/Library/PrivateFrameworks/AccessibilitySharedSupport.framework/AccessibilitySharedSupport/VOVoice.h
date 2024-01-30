@class NSString, NSData, VOSubstitution;

@interface VOVoice : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *voiceID;
@property (retain, nonatomic) VOSubstitution *substitution;

+ (id)fetchRequest;

@end
