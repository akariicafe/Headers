@class NSString, _ECSubjectFormatterContext, NSObject;
@protocol OS_os_log;

@interface ECSubjectFormatter : NSFormatter <EFLoggable>

@property (class, readonly, nonatomic) NSString *nonLocalizedReplyPrefix;
@property (class, readonly, nonatomic) NSString *nonLocalizedForwardPrefix;
@property (class, readonly, nonatomic) NSString *localizedReplyPrefix;
@property (class, readonly, nonatomic) NSString *localizedForwardPrefix;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) long long style;
@property (retain, nonatomic) _ECSubjectFormatterContext *replyContext;
@property (retain, nonatomic) _ECSubjectFormatterContext *forwardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subjectStringForDisplayForSubjectString:(id)a0;
+ (id)subjectStringForDisplayForSubjectString:(id)a0 style:(long long)a1;
+ (id)_subjectStringForDisplayForObject:(id)a0 style:(long long)a1;
+ (id)subjectStringForDisplayForSubject:(id)a0 style:(long long)a1;
+ (id)subjectStringForDisplayForMessage:(id)a0 style:(long long)a1;
+ (id)subjectStringForDisplayForSubject:(id)a0;
+ (id)subjectStringForDisplayForMessage:(id)a0;

- (id)initWithStyle:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)_localizedPrefixForSubjectFromSubject:(id)a0;

@end
