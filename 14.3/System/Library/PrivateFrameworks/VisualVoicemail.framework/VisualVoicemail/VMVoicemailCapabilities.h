@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (id)archivedDataWithError:(id *)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapabilities:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithTranscriptionEnabled:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCapabilities:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
