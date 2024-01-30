@class MFIMAPResponse, MFIMAPConnection;

@interface MFIMAPParseContext : NSObject {
    MFIMAPConnection *_connection;
    MFIMAPResponse *_response;
    const char *_start;
    const char *_end;
    const char *_originalStart;
    const char *_originalEnd;
    const char *_lastLoggedChar;
    BOOL _invalid;
}

+ (BOOL)hadWarningOrError;
+ (void)resetWarningOrError;

- (const char *)end;
- (void)dealloc;
- (void)increment;
- (BOOL)match:(const char *)a0;
- (BOOL)isValid;
- (void)setEnd:(const char *)a0;
- (const char *)start;
- (id)response;
- (void)setStart:(const char *)a0;
- (id)connection;
- (BOOL)getNumber:(unsigned long long *)a0;
- (BOOL)parseSpace;
- (void)emitWarning:(id)a0;
- (id)copyNumber;
- (void)emitError:(id)a0;
- (id)copyMessageSet;
- (id)copyQuotedString;
- (id)copyStringFrom:(const char *)a0 to:(const char *)a1 withCaseOption:(int)a2;
- (unsigned char)lookAhead;
- (BOOL)literalWithResponseConsumer:(id)a0 section:(id)a1;
- (id)copyLiteral;
- (id)copyLiteralString;
- (id)copyAtom;
- (struct __CFArray { } *)copyArrayAllowingNulls:(BOOL)a0;
- (id)initWithConnection:(id)a0 response:(id)a1 start:(const char *)a2 end:(const char *)a3;
- (void)logReadChars;
- (BOOL)match:(const char *)a0 upToSpecial:(const char *)a1;
- (id)copyNilOrString;
- (id)copyAString;
- (id)copyDateTime;
- (id)copyArray;
- (const char *)nextSeparator;

@end
