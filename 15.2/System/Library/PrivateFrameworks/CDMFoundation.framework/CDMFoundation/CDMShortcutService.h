@interface CDMShortcutService : CDMDAGBaseService

- (id)handle:(id)a0;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (id)buildParseWithDelegatedUserDialogAct;
- (id)handleVoiceCommandFollowUp:(id)a0;
- (id)filterExactMatchVoiceCommandSpans:(id)a0;
- (id)filterVoiceCommandPrefixMatchingSpans:(id)a0 voiceCommandSpan:(id)a1;
- (id)filterVoiceCommandSuffixMatchingSpans:(id)a0 voiceCommandSpan:(id)a1;
- (BOOL)shouldSpanComboProduceParse:(id)a0 prefixSpans:(id)a1 suffixSpans:(id)a2 tokenChain:(id)a3;

@end
