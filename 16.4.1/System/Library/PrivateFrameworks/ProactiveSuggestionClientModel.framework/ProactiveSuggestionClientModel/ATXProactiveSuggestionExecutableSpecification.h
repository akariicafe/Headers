@class NSData, NSString;
@protocol ATXSuggestionExecutableProtocol;

@interface ATXProactiveSuggestionExecutableSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {
    id<ATXSuggestionExecutableProtocol> _executableObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *executable;
@property (readonly) id<ATXSuggestionExecutableProtocol> executableObject;
@property (readonly, nonatomic) unsigned long long executableObjectHash;
@property (readonly, nonatomic) NSString *executableClassString;
@property (readonly, nonatomic) NSString *executableDescription;
@property (readonly, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) long long executableType;

+ (id)stringForExecutableType:(long long)a0;

- (id)initWithProto:(id)a0;
- (id)initWithExecutable:(id)a0 expectedExecutableClassString:(id)a1 executableDescription:(id)a2 executableIdentifier:(id)a3 suggestionExecutableType:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExecutable:(id)a0 executableObjectHash:(unsigned long long)a1 expectedExecutableClassString:(id)a2 executableDescription:(id)a3 executableIdentifier:(id)a4 suggestionExecutableType:(long long)a5;
- (id)initWithExecutable:(id)a0 expectedExecutableClassString:(id)a1 executableDescription:(id)a2 executableIdentifier:(id)a3;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)executableDataFromExecutableObject:(id)a0 executableClassStringFromObject:(id)a1;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSUInteger:(unsigned long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)jsonRawData;
- (id)initWithExecutableObject:(id)a0 executableDescription:(id)a1 executableIdentifier:(id)a2 suggestionExecutableType:(long long)a3;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (BOOL)fuzzyIsEqualToExecutableSpecification:(id)a0;
- (id)description;
- (id)allowedExecutableClasses;
- (void).cxx_destruct;
- (id)executableObjectFromData:(id)a0 executableClassString:(id)a1;

@end
