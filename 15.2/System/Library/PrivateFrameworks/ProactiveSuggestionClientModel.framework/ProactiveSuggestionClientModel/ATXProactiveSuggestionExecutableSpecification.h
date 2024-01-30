@class NSData, NSString;
@protocol ATXSuggestionExecutableProtocol;

@interface ATXProactiveSuggestionExecutableSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {
    id<ATXSuggestionExecutableProtocol> _executableObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *executable;
@property (readonly, nonatomic) id<ATXSuggestionExecutableProtocol> executableObject;
@property (readonly, nonatomic) unsigned long long executableObjectHash;
@property (readonly, nonatomic) NSString *executableClassString;
@property (readonly, nonatomic) NSString *executableDescription;
@property (readonly, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) long long executableType;

+ (id)stringForExecutableType:(long long)a0;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initWithExecutable:(id)a0 expectedExecutableClassString:(id)a1 executableDescription:(id)a2 executableIdentifier:(id)a3;
- (id)jsonRawData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)fuzzyIsEqualToExecutableSpecification:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)executableObjectFromData:(id)a0 executableClassString:(id)a1;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (id)allowedExecutableClasses;
- (id)initWithExecutable:(id)a0 expectedExecutableClassString:(id)a1 executableDescription:(id)a2 executableIdentifier:(id)a3 suggestionExecutableType:(long long)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)initWithExecutable:(id)a0 executableObjectHash:(unsigned long long)a1 expectedExecutableClassString:(id)a2 executableDescription:(id)a3 executableIdentifier:(id)a4 suggestionExecutableType:(long long)a5;
- (id)executableDataFromExecutableObject:(id)a0 executableClassStringFromObject:(id)a1;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSUInteger:(unsigned long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithExecutableObject:(id)a0 executableDescription:(id)a1 executableIdentifier:(id)a2 suggestionExecutableType:(long long)a3;

@end
