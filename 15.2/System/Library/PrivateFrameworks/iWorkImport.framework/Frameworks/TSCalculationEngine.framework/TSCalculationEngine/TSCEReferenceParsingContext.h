@class NSString, NSArray, TSCEAbortObject, TSCEQuotedRefPathSplitter, NSMutableArray;
@protocol TSCEReferenceResolving;

@interface TSCEReferenceParsingContext : NSObject <NSCopying>

@property (nonatomic) struct TSCETableResolver { void /* function */ **x0; } *contextTableResolver;
@property (readonly, nonatomic) id<TSCEReferenceResolving> contextResolver;
@property (retain, nonatomic) NSString *contextSheetName;
@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSString *aggregateFunction;
@property (retain, nonatomic) TSCEQuotedRefPathSplitter *refPathSplitter;
@property (nonatomic) BOOL filterColons;
@property (nonatomic) BOOL referenceIsComplete;
@property (retain, nonatomic) TSCEAbortObject *abortObject;
@property (nonatomic) BOOL parseAsBaseTableReference;
@property (nonatomic) BOOL trimNames;
@property (nonatomic) BOOL namesUsed;
@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (retain, nonatomic) NSString *sheetName;
@property (retain, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSString *rest;
@property (retain, nonatomic) NSString *sheetNameUnquoted;
@property (retain, nonatomic) NSString *tableNameUnquoted;
@property (retain, nonatomic) NSMutableArray *referencesMatchingInputAsPrefix;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id).cxx_construct;
- (id)initWithContextTableResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a0;
- (id)initWithContextTableResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a0 components:(id)a1;
- (id)initWithContextResolver:(id)a0 components:(id)a1;
- (id)initWithContextResolver:(id)a0;

@end
