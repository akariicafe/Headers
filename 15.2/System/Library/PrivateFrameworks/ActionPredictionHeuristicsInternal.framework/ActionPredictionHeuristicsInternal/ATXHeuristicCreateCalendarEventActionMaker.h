@class NSString, ATXHeuristicObjectHandle;

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {
    ATXHeuristicObjectHandle *_event;
    NSString *_suggestionsInfoUniqueKey;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_makeAction;
- (id)actionTypeName;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 event:(id)a2 suggestionsInfoUniqueKey:(id)a3;

@end
