@class NSString, NSData, NSDate, ACActivityPresentationOptions;

@interface ACActivityDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSString *platterTargetBundleIdentifier;
@property (retain, nonatomic) ACActivityPresentationOptions *presentationOptions;
@property (nonatomic) BOOL isEphemeral;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSData *descriptorData;
@property (nonatomic) long long contentType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 target:(id)a1 presentationOptions:(id)a2 isEphemeral:(BOOL)a3 createdDate:(id)a4 descriptorData:(id)a5 contentType:(long long)a6;

@end
