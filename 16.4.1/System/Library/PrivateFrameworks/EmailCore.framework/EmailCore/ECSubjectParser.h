@interface ECSubjectParser : NSObject

+ (id)subjectWithoutPrefixForSubject:(id)a0;
+ (id)subjectWithoutPrefixForSubject:(id)a0 prefix:(id *)a1;
+ (unsigned long long)prefixLengthForSubject:(id)a0;
+ (unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)a0;
+ (BOOL)subjectHasReplyPrefix:(id)a0;
+ (unsigned long long)prefixLengthForSubject:(id)a0 replyOnly:(BOOL)a1;
+ (id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)a0 prefix:(id *)a1;
+ (unsigned long long)_fastPrefixLengthForSubject:(id)a0 replyOnly:(BOOL)a1;
+ (unsigned long long)_prefixLengthForSubject:(id)a0 replyOnly:(BOOL)a1;

@end
