@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)document;
- (id)init;
- (id)mainThread;
- (id)mainMOC;
- (id)initWithDocument:(id)a0 mainThread:(id)a1;
- (void)setThreadMOC:(id)a0;
- (id)threadMOC;

@end
